#ifndef UE4SS_SDK_UI_Facility_Objective_ShieldEmitter_HPP
#define UE4SS_SDK_UI_Facility_Objective_ShieldEmitter_HPP

class UUI_Facility_Objective_ShieldEmitter_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimArrows;
    class UUI_ImageTinted_C* Img_Arrow_Left;
    class UUI_ImageTinted_C* Img_Arrow_Right;
    class UUI_ImageTinted_C* Img_ShieldEmitter;
    class UUI_ImageTinted_C* Img_ShieldEmitter_Outline;
    class UCanvasPanel* RootCanvas;
    class UFacilityObjective* Objective;
    class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* ShieldEmitter;

    void Refresh(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
    void TryFindEmitter(class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* Emitter, bool CallFunc_IsValid_ReturnValue, class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* CallFunc_GetActorOfClass_ReturnValue, FTryFindEmitterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void SetObjective(class UObjective* obj);
    void SetEmitter(class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* InEmitter);
    void OnLeftUsableChanged(bool CanUse);
    void Construct();
    void OnRightUsableChanged(bool CanUse);
    void OnObjectiveUpdated(class UObjective* Objective);
    void ExecuteUbergraph_UI_Facility_Objective_ShieldEmitter(int32 EntryPoint, FExecuteUbergraph_UI_Facility_Objective_ShieldEmitterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Facility_Objective_ShieldEmitterK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_Facility_Objective_ShieldEmitterK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UObjective* K2Node_Event_obj, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* K2Node_CustomEvent_InEmitter, bool K2Node_CustomEvent_canUse_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_canUse, class UObjective* K2Node_CustomEvent_Objective);
};

#endif
