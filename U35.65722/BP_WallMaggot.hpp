#ifndef UE4SS_SDK_BP_WallMaggot_HPP
#define UE4SS_SDK_BP_WallMaggot_HPP

class ABP_WallMaggot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* WallMaggotExtrude_Cue;
    class UAudioComponent* WallMaggotRetract_Cue;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* WallMaggot_idle_Cue;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleHealthComponent* SimpleHealth;
    class UCapsuleComponent* Capsule;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* SK_HollowBoughMaggot_01;
    class UStaticMeshComponent* SM_Carver_Rock14;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;
    bool Hide;
    TArray<FSingleAnimationPlayData> Animations;
    class USoundCue* deathSound;
    class UParticleSystem* deathParticles;

    void OnRep_Hide();
    void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
    void ReceiveBeginPlay();
    void TriggerHide(class APlayerCharacter* Player, bool enteredTrigger);
    void Retract();
    void Extend();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_WallMaggot(int32 EntryPoint, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, FExecuteUbergraph_BP_WallMaggotK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool Temp_bool_IsClosed_Variable_2, float CallFunc_RandomFloatInRange_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_MakeVector_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2);
};

#endif
