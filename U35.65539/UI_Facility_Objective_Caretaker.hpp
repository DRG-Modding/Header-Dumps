#ifndef UE4SS_SDK_UI_Facility_Objective_Caretaker_HPP
#define UE4SS_SDK_UI_Facility_Objective_Caretaker_HPP

class UUI_Facility_Objective_Caretaker_C : UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_ImageTinted_C* Img_Caretaker_Outline;
    UUI_ImageTinted_C* Img_Caretaker_Solid;
    UUI_ImageTinted_C* Img_Shield;
    bool ShieldOn;
    bool CaretakerDestroyed;
    ABP_MainFacility_DataVault_C* mainFacility;
    UFacilityObjective* Objective;

    void GetCaretakerIsAlive(bool& IsAlive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue);
    void TryFindMainFacility(UBP_MainFacility_DataVault_C* Facility, bool CallFunc_IsValid_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UBP_MainFacility_DataVault_C* CallFunc_GetActorOfClass_ReturnValue);
    void Refresh(bool CallFunc_GetCaretakerIsAlive_IsAlive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void PreConstruct(bool IsDesignTime);
    void SetObjective(UObjective* obj);
    void OnObjectiveUpdated(UObjective* Objective);
    void SetMainFacility(UBP_MainFacility_DataVault_C* InMainFacility);
    void FacilityActivated();
    void ExecuteUbergraph_UI_Facility_Objective_Caretaker(int32 EntryPoint, ObjectiveUpdatedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FacilityActivated__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, UObjective* K2Node_Event_obj, UObjective* K2Node_CustomEvent_Objective, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, UBP_MainFacility_DataVault_C* K2Node_CustomEvent_InMainFacility);
}

#endif
