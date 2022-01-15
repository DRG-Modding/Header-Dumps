#ifndef UE4SS_SDK_HUDWarning_DrillDozerCellDestroyed_HPP
#define UE4SS_SDK_HUDWarning_DrillDozerCellDestroyed_HPP

class UHUDWarning_DrillDozerCellDestroyed_C : UHUDWarningWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* RightCellDead;
    UWidgetAnimation* LeftCellDead;
    UImage* BG_Gradient;
    UImage* DrillDozer_Background;
    UImage* DrillDozer_Background_Caterpillar;
    UImage* IconLeft;
    UImage* IconRight;
    UImage* Image_Left;
    UImage* Image_Main;
    UImage* Image_Right;
    UImage* NoiseImage;
    UOverlay* Overlay_Outer;
    USoundBase* PingSound;
    bool ShouldDestroyAfterPing;
    float TimeBetweenSound;

    void SetData(UTexture2D* Texture, USoundBase* PingSound);
    void PreConstruct(bool IsDesignTime);
    void Ping(bool DestroyAfterPing);
    void LeftFinished();
    void Construct();
    void RightFinished();
    void ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UTexture2D* K2Node_Event_Texture, USoundBase* K2Node_Event_PingSound, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, bool K2Node_Event_DestroyAfterPing, bool Temp_bool_IsClosed_Variable, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FLinearColor CallFunc_MenuColors_OutputColor_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
}

#endif
