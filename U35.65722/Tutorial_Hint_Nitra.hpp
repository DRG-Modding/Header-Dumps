#ifndef UE4SS_SDK_Tutorial_Hint_Nitra_HPP
#define UE4SS_SDK_Tutorial_Hint_Nitra_HPP

class UTutorial_Hint_Nitra_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;

    void OnIncreased_Event(class UCappedResource* Resource, float Amount);
    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_Nitra(int32 EntryPoint, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_Tutorial_Hint_NitraK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UCappedResource* CallFunc_GetResource_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

#endif
