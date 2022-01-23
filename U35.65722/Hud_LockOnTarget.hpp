#ifndef UE4SS_SDK_Hud_LockOnTarget_HPP
#define UE4SS_SDK_Hud_LockOnTarget_HPP

class UHud_LockOnTarget_C : public ULockOnTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SavedAmmoOutro;
    class UWidgetAnimation* TargetLocked;
    class UImage* Arrow;
    class UImage* CrossHair_Base;
    class UImage* CrossHair_Glow;
    class UImage* CrossHair_Glow_1;
    class USizeBox* CrosshairSize;
    class UTextBlock* Text_LockOnCount;
    class UVerticalBox* VerticalBox_Crosshair;
    float ArrowRadius;
    float ArrowRotation;
    float ArrowAngle;

    void OnTargetDistanceChanged(float Distance);
    void OnInViewChanged(bool inView, float Angle);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnLockOn(int32 numberOfLockOnsOnThisTarget, int32 totalNumberOfLockOns);
    void OnFireComplete(int32 numberOfLockOnsOnThisTarget);
    void UpdateCount(int32 NewCount);
    void OnShow();
    void CleanUpWidget(bool showFade);
    void Construct();
    void OutroFinished();
    void ExecuteUbergraph_Hud_LockOnTarget(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_Distance, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsVisible_ReturnValue, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool K2Node_Event_inView, float K2Node_Event_Angle, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, ESlateVisibility K2Node_Select_Default, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, int32 K2Node_Event_numberOfLockOnsOnThisTarget_1, int32 K2Node_Event_totalNumberOfLockOns, int32 K2Node_Event_numberOfLockOnsOnThisTarget, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, int32 K2Node_CustomEvent_NewCount, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, ESlateVisibility K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_showFade, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FExecuteUbergraph_Hud_LockOnTargetK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
