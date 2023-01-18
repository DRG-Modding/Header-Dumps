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
    void ExecuteUbergraph_Tutorial_Hint_Deposite(int32 EntryPoint);
};

#endif
