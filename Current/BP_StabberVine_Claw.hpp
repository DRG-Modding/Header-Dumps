#ifndef UE4SS_SDK_BP_StabberVine_Claw_HPP
#define UE4SS_SDK_BP_StabberVine_Claw_HPP

class ABP_StabberVine_Claw_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyComponent* enemy;
    class UStaticMeshComponent* SM_StabberVine_Blade;
    class UMaterialInstanceDynamic* Material;
    FLinearColor DissolveTint1;
    FLinearColor DissolveTint2;
    float DissolveDuration;

    void ReceiveBeginPlay();
    void dissolve();
    void AddImpulse();
    void ExecuteUbergraph_BP_StabberVine_Claw(int32 EntryPoint);
};

#endif
