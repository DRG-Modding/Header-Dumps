#ifndef UE4SS_SDK_Tutorial_Hint_Deposite_HPP
#define UE4SS_SDK_Tutorial_Hint_Deposite_HPP

class UTutorial_Hint_Deposite_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;

    void OnResourceFull(UCappedResource* Resource);
    void OnCallDonkey();
    void ReceiveOnInitialized();
    void DepositEnd(UResourceBank* ResourceBank);
    void ExecuteUbergraph_Tutorial_Hint_Deposite(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ResourceFullSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UCappedResource* K2Node_CustomEvent_resource, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, OnCallDonkeySignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UResourceBank* K2Node_CustomEvent_ResourceBank);
}

#endif
