/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID PLAY_BALLENEMY_AMBIENCE = 3284840310U;
        static const AkUniqueID PLAY_BALLENEMY_ATTACK = 506762798U;
        static const AkUniqueID PLAY_BALLENEMY_BARK = 789229116U;
        static const AkUniqueID PLAY_BALLENEMY_BEEP = 738307890U;
        static const AkUniqueID PLAY_BUMPER_HIT = 1705323465U;
        static const AkUniqueID PLAY_CARROT_PICKUP = 3626035710U;
        static const AkUniqueID PLAY_MUSIC = 2932040671U;
        static const AkUniqueID PLAY_RAYGUNSHOOTER_FIRELOOP = 2660315473U;
        static const AkUniqueID PLAY_SHOCK = 2842982140U;
        static const AkUniqueID PLAY_SHOCK_AMBIENCE = 2946345747U;
        static const AkUniqueID PLAY_SPACESHIP_AMBIENCE = 311975177U;
        static const AkUniqueID PLAY_SPACESHIP_LARGE_PASS = 1167100998U;
        static const AkUniqueID STOP_BALLENEMY_AMBIENCE = 1677540204U;
        static const AkUniqueID STOP_RAYGUNSHOOTER_FIRELOOP = 2370134607U;
        static const AkUniqueID STOP_SHOCK_AMBIENCE = 2895423681U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace BALLENEMY_AMBIENCE
        {
            static const AkUniqueID GROUP = 1252037349U;

            namespace STATE
            {
                static const AkUniqueID ACTIVE = 58138747U;
                static const AkUniqueID INACTIVE = 3163453698U;
            } // namespace STATE
        } // namespace BALLENEMY_AMBIENCE

        namespace MUSIC
        {
            static const AkUniqueID GROUP = 3991942870U;

            namespace STATE
            {
                static const AkUniqueID MAINMENU = 3604647259U;
                static const AkUniqueID ZONE_1 = 2643994087U;
            } // namespace STATE
        } // namespace MUSIC

    } // namespace STATES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID BALLENEMY_DISTANCE = 2142520180U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MX = 1685527054U;
        static const AkUniqueID SFX = 393239870U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__