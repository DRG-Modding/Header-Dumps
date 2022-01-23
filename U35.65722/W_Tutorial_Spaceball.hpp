#ifndef UE4SS_SDK_W_Tutorial_Spaceball_HPP
#define UE4SS_SDK_W_Tutorial_Spaceball_HPP

class UW_Tutorial_Spaceball_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void FinishSpaceballTutorial(class UUsableComponentBase* Component);
    void ExecuteUbergraph_W_Tutorial_Spaceball(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_W_Tutorial_SpaceballK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, bool CallFunc_HasCharacter_ReturnValue, class UUsableComponentBase* K2Node_CustomEvent_component, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Spacerig_Spaceball_C* K2Node_DynamicCast_AsBP_Spacerig_Spaceball, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue);
};

#endif
