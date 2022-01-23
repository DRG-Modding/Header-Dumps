#ifndef UE4SS_SDK_W_TutorialTraversal_HPP
#define UE4SS_SDK_W_TutorialTraversal_HPP

class UW_TutorialTraversal_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    class ABP_TutorialTriggerManager_C* Manager;

    void OnShown();
    void UpdateText();
    void MessageReceived(FName TriggerName);
    void ExecuteUbergraph_W_TutorialTraversal(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_W_TutorialTraversalK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasCharacter_ReturnValue, TArray<class ABP_TutorialTriggerManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, FName K2Node_CustomEvent_TriggerName, class ABP_TutorialTriggerManager_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
