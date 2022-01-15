#ifndef UE4SS_SDK_BP_WallMaggot_HPP
#define UE4SS_SDK_BP_WallMaggot_HPP

class ABP_WallMaggot_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* WallMaggotExtrude_Cue;
    UAudioComponent* WallMaggotRetract_Cue;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* WallMaggot_idle_Cue;
    UTerrainDetectComponent* TerrainDetect;
    USimpleHealthComponent* SimpleHealth;
    UCapsuleComponent* Capsule;
    UTerrainPlacementComponent* terrainPlacement;
    USkeletalMeshComponent* SK_HollowBoughMaggot_01;
    UStaticMeshComponent* SM_Carver_Rock14;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    USceneComponent* DefaultSceneRoot;
    bool Hide;
    TArray<FSingleAnimationPlayData> Animations;
    USoundCue* deathSound;
    UParticleSystem* deathParticles;

    void OnRep_Hide();
    void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
    void ReceiveBeginPlay();
    void TriggerHide(UPlayerCharacter* Player, bool enteredTrigger);
    void Retract();
    void Extend();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_WallMaggot(int32 EntryPoint, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool Temp_bool_IsClosed_Variable_2, float CallFunc_RandomFloatInRange_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_MakeVector_ReturnValue, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2);
}

#endif
