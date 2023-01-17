#ifndef UE4SS_SDK_UI_CallingMolly_HPP
#define UE4SS_SDK_UI_CallingMolly_HPP

class UUI_CallingMolly_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPing;
    class UWidgetAnimation* AnimShow;
    class UBasic_Image_C* Molly_Image;
    class USizeBox* MollySize;
    int32 Size;
    class AMolly* Donkey;
    class AFSDPlayerState* PlayerState;
    bool IsIconVisible;
    FTimerHandle TimeoutHandle;

    void GetIsPlayerCalling(bool& OutIsCalling);
    void SetDonkey(class AMolly* InDonkey);
    void SetPlayerState(class APlayerState* InPlayerState);
    void OnDonkeyChanged(class AMolly* InDonkey);
    void SetIconVisible(bool InVisible);
    void OnAnimStarted();
    void OnAnimFinished();
    void OnCalledByChanged(class APlayerCharacter* PlayerCharacter);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnTimeOut();
    void PingIcon();
    void OnPingFinished();
    void ExecuteUbergraph_UI_CallingMolly(int32 EntryPoint);
};

#endif
