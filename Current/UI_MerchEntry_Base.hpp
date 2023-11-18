#ifndef UE4SS_SDK_UI_MerchEntry_Base_HPP
#define UE4SS_SDK_UI_MerchEntry_Base_HPP

class UUI_MerchEntry_Base_C : public UUserWidget
{
    FString SteamURL;
    FString StatKey;
    FString StatMenuKey;

    void Log(FString InText);
    void OpenLink();
};

#endif
