#ifndef UE4SS_SDK_UI_Facility_Objective_ShieldEmitter_HPP
#define UE4SS_SDK_UI_Facility_Objective_ShieldEmitter_HPP

class UUI_Facility_Objective_ShieldEmitter_C : UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimArrows;
    UUI_ImageTinted_C* Img_Arrow_Left;
    UUI_ImageTinted_C* Img_Arrow_Right;
    UUI_ImageTinted_C* Img_ShieldEmitter;
    UUI_ImageTinted_C* Img_ShieldEmitter_Outline;
    UCanvasPanel* RootCanvas;
    UFacilityObjective* Objective;
    ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* ShieldEmitter;

    void Refresh(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
    void TryFindEmitter(ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* Emitter, bool CallFunc_IsValid_ReturnValue, ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* CallFunc_GetActorOfClass_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void SetObjective(UObjective* obj);
    void SetEmitter(ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* InEmitter);
    void OnLeftUsableChanged(bool CanUse);
    void Construct();
    void OnRightUsableChanged(bool CanUse);
    void OnObjectiveUpdated(UObjective* Objective);
    void ExecuteUbergraph_UI_Facility_Objective_ShieldEmitter(int32 EntryPoint, UsableChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UsableChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UObjective* K2Node_Event_obj, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* K2Node_CustomEvent_InEmitter, bool K2Node_CustomEvent_canUse_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_canUse, UObjective* K2Node_CustomEvent_Objective);
}

#endif
