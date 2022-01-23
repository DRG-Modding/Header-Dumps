#ifndef UE4SS_SDK_HUDWarning_DefaultEntry_HPP
#define UE4SS_SDK_HUDWarning_DefaultEntry_HPP

class UHUDWarning_DefaultEntry_C : public UHUDWarningWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAnim;
    class UImage* BG_Gradient;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UImage* Image_Main;
    class UOverlay* Overlay_Outer;
    class USoundBase* PingSound;
    bool ShouldDestroyAfterPing;
    float TimeBetweenSound;

    void SetData(class UTexture2D* Texture, class USoundBase* PingSound);
    void PreConstruct(bool IsDesignTime);
    void Ping(bool DestroyAfterPing);
    void PingFinished();
    void Construct();
    void ExecuteUbergraph_HUDWarning_DefaultEntry(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UTexture2D* K2Node_Event_Texture, class USoundBase* K2Node_Event_PingSound, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, bool K2Node_Event_DestroyAfterPing, FExecuteUbergraph_HUDWarning_DefaultEntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
};

#endif
