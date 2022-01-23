#ifndef UE4SS_SDK_UI_Facility_Objective_Caretaker_HPP
#define UE4SS_SDK_UI_Facility_Objective_Caretaker_HPP

class UUI_Facility_Objective_Caretaker_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ImageTinted_C* Img_Caretaker_Outline;
    class UUI_ImageTinted_C* Img_Caretaker_Solid;
    class UUI_ImageTinted_C* Img_Shield;
    bool ShieldOn;
    bool CaretakerDestroyed;
    class ABP_MainFacility_DataVault_C* mainFacility;
    class UFacilityObjective* Objective;

    void GetCaretakerIsAlive(bool& IsAlive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue);
    void TryFindMainFacility(class ABP_MainFacility_DataVault_C* Facility, bool CallFunc_IsValid_ReturnValue, FTryFindMainFacilityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_MainFacility_DataVault_C* CallFunc_GetActorOfClass_ReturnValue);
    void Refresh(bool CallFunc_GetCaretakerIsAlive_IsAlive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void PreConstruct(bool IsDesignTime);
    void SetObjective(class UObjective* obj);
    void OnObjectiveUpdated(class UObjective* Objective);
    void SetMainFacility(class ABP_MainFacility_DataVault_C* InMainFacility);
    void FacilityActivated();
    void ExecuteUbergraph_UI_Facility_Objective_Caretaker(int32 EntryPoint, FExecuteUbergraph_UI_Facility_Objective_CaretakerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Facility_Objective_CaretakerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class UObjective* K2Node_Event_obj, class UObjective* K2Node_CustomEvent_Objective, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, class ABP_MainFacility_DataVault_C* K2Node_CustomEvent_InMainFacility);
};

#endif
