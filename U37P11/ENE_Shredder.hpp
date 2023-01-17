#ifndef UE4SS_SDK_ENE_Shredder_HPP
#define UE4SS_SDK_ENE_Shredder_HPP

class AENE_Shredder_C : public AENE_Shredder_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyComponent* enemy;

    void OnFrozen(class AActor* Source);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_Shredder(int32 EntryPoint);
};

#endif
