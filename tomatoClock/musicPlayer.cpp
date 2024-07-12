
#include <QMediaPlayer>
#include <QMediaContent>
#include <QList>

class MyPlayer : public QObject
{
    Q_OBJECT

public:
    MyPlayer(QObject *parent = nullptr)
        : QObject(parent)
        , m_player(new QMediaPlayer(this))
    {
        connect(m_player, &stateChanged, this, &MyPlayer::onStateChanged);
    }

    void setPlaylist(const QList<QUrl> &urls)
    {
        m_playlist = urls;
    }

    void play()
    {
        if (!m_playlist.isEmpty())
        {
            m_player->setMedia(QMediaContent(m_playlist.first()));
            m_player->play();
        }
    }

private slots:
    void onStateChanged(QMediaPlayer::State state)
    {
        if (state == QMediaPlayer::StoppedState && !m_playlist.isEmpty())
        {
            m_playlist.removeFirst();
            if (!m_playlist.isEmpty())
            {
                m_player->setMedia(QMediaContent(m_playlist.first()));
                m_player->play();
            }
        }
    }

private:
    QMediaPlayer *m_player;
    QList<QUrl> m_playlist;
};
