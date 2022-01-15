#ifndef UE4SS_SDK_OnlineSubsystemSteam_HPP
#define UE4SS_SDK_OnlineSubsystemSteam_HPP

class USteamAuthComponentModuleInterface : UHandlerComponentFactory
{
}

class USteamNetConnection : UIpConnection
{
    bool bIsPassthrough;
}

class USteamNetDriver : UIpNetDriver
{
}

#endif
