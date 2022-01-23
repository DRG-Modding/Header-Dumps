#ifndef UE4SS_SDK_Tutorial_Hint_Deposite_HPP
#define UE4SS_SDK_Tutorial_Hint_Deposite_HPP

class UTutorial_Hint_Deposite_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;

    void OnResourceFull(class UCappedResource* Resource);
    void OnCallDonkey();
    void ReceiveOnInitialized();
    void DepositEnd(class UResourceBank* ResourceBank);
    void ExecuteUbergraph_Tutorial_Hint_Deposite(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_Tutorial_Hint_DepositeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Tutorial_Hint_DepositeK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UCappedResource* K2Node_CustomEvent_resource, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FExecuteUbergraph_Tutorial_Hint_DepositeK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UResourceBank* K2Node_CustomEvent_ResourceBank);
};

#endif
