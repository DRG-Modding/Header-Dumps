#ifndef UE4SS_SDK_Tutorial_Hint_Nitra_HPP
#define UE4SS_SDK_Tutorial_Hint_Nitra_HPP

class UTutorial_Hint_Nitra_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;

    void OnIncreased_Event(UCappedResource* Resource, float Amount);
    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_Nitra(int32 EntryPoint, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsValid_ReturnValue, ResourceAddedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UCappedResource* K2Node_CustomEvent_Resource, float K2Node_CustomEvent_Amount, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UCappedResource* CallFunc_GetResource_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
}

#endif
