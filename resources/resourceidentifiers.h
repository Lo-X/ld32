#ifndef RESOURCE_IDENTIFIERS_H
#define RESOURCE_IDENTIFIERS_H

// Forward declarations
namespace sf
{
    class Texture;
    class Font;
    class Shader;
    class Music;
    class SoundBuffer;
}

template <typename Resource, typename Identifier>
class ResourceHolder;



// Textures
namespace Textures
{
    enum ID
    {
        Particle,
        Background,
        BackgroundMenu,
        Hero,
        HeroWalkingWith,
        HeroWalkingWithout,
        HeroJumpingWith,
        HeroJumpingWithout,
        Platforms,
        Unicorn,
        ZombieWalking,
        ZombieAttacking,
        ZombieDying,
        Boss1,
        Boss1Attacking,
        Boss1Dying,
        Cursor,
        Pvbar,
        Medkit
    };
}

typedef ResourceHolder<sf::Texture, Textures::ID> TextureHolder;


// Fonts
namespace Fonts
{
    enum ID
    {
        Main,
        Savage
    };
}

typedef ResourceHolder<sf::Font, Fonts::ID> FontHolder;


// Shaders
namespace Shaders
{
    enum ID
    {

    };
}
typedef ResourceHolder<sf::Shader, Shaders::ID> ShaderHolder;


// Musics
namespace Musics
{
    enum ID
    {
        MainThemeSinging,
        MainThemeMusical
    };
}


// Sounds
namespace Sounds
{
    enum ID
    {
        Jump,
        Hit,
        Fire,
        Medkit,
        Pickup,
        UnicornFlying,
        ZombieHit,
        ZombieJump,
        Boss1AddPop
    };
}
typedef ResourceHolder<sf::SoundBuffer, Sounds::ID> SoundHolder;


// Scripts
namespace Scripts
{
    enum ID
    {
        HelloWorld
    };
}



#endif // RESOURCE_IDENTIFIERS_H
