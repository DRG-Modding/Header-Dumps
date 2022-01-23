#ifndef UE4SS_SDK_HUDWarning_DrillDozerCellDestroyed_HPP
#define UE4SS_SDK_HUDWarning_DrillDozerCellDestroyed_HPP

class UHUDWarning_DrillDozerCellDestroyed_C : public UHUDWarningWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RightCellDead;
    class UWidgetAnimation* LeftCellDead;
    class UImage* BG_Gradient;
    class UImage* DrillDozer_Background;
    class UImage* DrillDozer_Background_Caterpillar;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UImage* Image_Left;
    class UImage* Image_Main;
    class UImage* Image_Right;
    class UImage* NoiseImage;
    class UOverlay* Overlay_Outer;
    class USoundBase* PingSound;
    bool ShouldDestroyAfterPing;
    float TimeBetweenSound;

    void SetData(class UTexture2D* Texture, class USoundBase* PingSound);
    void PreConstruct(bool IsDesignTime);
    void Ping(bool DestroyAfterPing);
    void LeftFinished();
    void Construct();
    void RightFinished();
    void ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_HUDWarning_DrillDozerCellDestroyedK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* K2Node_Event_Texture, class USoundBase* K2Node_Event_PingSound, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, bool K2Node_Event_DestroyAfterPing, bool Temp_bool_IsClosed_Variable, FExecuteUbergraph_HUDWarning_DrillDozerCellDestroyedK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FLinearColor CallFunc_MenuColors_OutputColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
};

#endif
