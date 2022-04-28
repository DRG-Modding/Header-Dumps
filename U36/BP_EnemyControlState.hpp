#ifndef UE4SS_SDK_BP_EnemyControlState_HPP
#define UE4SS_SDK_BP_EnemyControlState_HPP

class UBP_EnemyControlState_C : public UEnemyControlStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* GetOnMontage;

    void OnNotifyEnd_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnNotifyBegin_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnInterrupted_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnBlendOut_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnCompleted_C6BE400543D83DD77DB15BA38DC1ED24(FName NotifyName);
    void OnControllingEnemy(bool IsControlling);
    void OnControllingEnemyAttached();
    void ExecuteUbergraph_BP_EnemyControlState(int32 EntryPoint);
};

#endif
