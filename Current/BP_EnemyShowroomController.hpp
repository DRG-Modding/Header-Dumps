#ifndef UE4SS_SDK_BP_EnemyShowroomController_HPP
#define UE4SS_SDK_BP_EnemyShowroomController_HPP

class UBP_EnemyShowroomController_C : public UEnemyShowroomController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_PlayAttack(class UAnimSequenceBase* attackAnimation);
    void ExecuteUbergraph_BP_EnemyShowroomController(int32 EntryPoint);
};

#endif
