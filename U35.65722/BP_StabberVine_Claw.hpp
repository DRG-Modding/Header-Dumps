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
    void Dissolve();
    void AddImpulse();
    void ExecuteUbergraph_BP_StabberVine_Claw(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, FVector CallFunc_MakeVector_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
};

#endif
