#ifndef UE4SS_SDK_BP_RedThornFlower_Alone_HPP
#define UE4SS_SDK_BP_RedThornFlower_Alone_HPP

class ABP_RedThornFlower_Alone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UStaticMeshComponent* SM_LightCone001;
    class UCapsuleComponent* CapsuleCollision;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_RedVinesFlower_Body_01;
    class UStaticMeshComponent* SM_RedVinesFlower_Head_01;
    class USceneComponent* Flower;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    FRandomStream Random Seed Stream;
    FRotator Spike Direction;
    FVector Spike Origin;
    float Spike Distribution Angle;
    int32 NumSpikes;
    float Spike Origin Height;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
    void ExecuteUbergraph_BP_RedThornFlower_Alone(int32 EntryPoint, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Variable, FVector CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, class AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, float K2Node_ComponentBoundEvent_health);
};

#endif
