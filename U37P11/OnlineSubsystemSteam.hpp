#ifndef UE4SS_SDK_OnlineSubsystemSteam_HPP
#define UE4SS_SDK_OnlineSubsystemSteam_HPP

class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
};

class USteamNetConnection : public UIpConnection
{
    bool bIsPassthrough;

};

class USteamNetDriver : public UIpNetDriver
{
};

#endif
