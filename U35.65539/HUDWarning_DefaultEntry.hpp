#ifndef UE4SS_SDK_HUDWarning_DefaultEntry_HPP
#define UE4SS_SDK_HUDWarning_DefaultEntry_HPP

class UHUDWarning_DefaultEntry_C : UHUDWarningWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* PingAnim;
    UImage* BG_Gradient;
    UImage* IconLeft;
    UImage* IconRight;
    UImage* Image_Main;
    UOverlay* Overlay_Outer;
    USoundBase* PingSound;
    bool ShouldDestroyAfterPing;
    float TimeBetweenSound;

    void SetData(UTexture2D* Texture, USoundBase* PingSound);
    void PreConstruct(bool IsDesignTime);
    void Ping(bool DestroyAfterPing);
    void PingFinished();
    void Construct();
    void ExecuteUbergraph_HUDWarning_DefaultEntry(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UTexture2D* K2Node_Event_Texture, USoundBase* K2Node_Event_PingSound, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, bool K2Node_Event_DestroyAfterPing, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
}

#endif
