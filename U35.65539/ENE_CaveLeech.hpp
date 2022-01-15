#ifndef UE4SS_SDK_ENE_CaveLeech_HPP
#define UE4SS_SDK_ENE_CaveLeech_HPP

class AENE_CaveLeech_C : UCaveLeech
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh;
    UParticleSystemComponent* ParticleSystem;
    USceneComponent* RetractSpot;
    UAudioComponent* HeadAudio;
    UPointLightComponent* PointLight;
    UOutlineComponent* outline;
    USphereComponent* HitCollider;
    UTerrainPlacementComponent* terrainPlacement;
    USphereComponent* HeadCollision;
    USkeletalMeshComponent* TopMesh;
    USceneComponent* Mouth;
    float Light_on_Light_value_5D62893F4543BADC6EB650BB2288E402;
    TEnumAsByte<ETimelineDirection::Type> Light_on__Direction_5D62893F4543BADC6EB650BB2288E402;
    UTimelineComponent* Light_on;
    float Light_off_Light_value_FB1F6FB448F184C53818E18AA6CA6E7E;
    TEnumAsByte<ETimelineDirection::Type> Light_off__Direction_FB1F6FB448F184C53818E18AA6CA6E7E;
    UTimelineComponent* Light_off;
    float Emissive_on_Glow_value_8FD7DFD6484E2EAF8A2D1D97C4E37F6E;
    TEnumAsByte<ETimelineDirection::Type> Emissive_on__Direction_8FD7DFD6484E2EAF8A2D1D97C4E37F6E;
    UTimelineComponent* Emissive_on;
    float Emissive_off_Glow_value_E8DBA0094826FB48DB3D0A9B7129C074;
    TEnumAsByte<ETimelineDirection::Type> Emissive_off__Direction_E8DBA0094826FB48DB3D0A9B7129C074;
    UTimelineComponent* Emissive_off;
    UMaterialInstance* Emission ;

    void CreateDynamicMaterials(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void PlayAudioHead(USoundBase* NewSound);
    FVector GetMouthLocation(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1);
    void UserConstructionScript();
    void Emissive_on__FinishedFunc();
    void Emissive_on__UpdateFunc();
    void Emissive_off__FinishedFunc();
    void Emissive_off__UpdateFunc();
    void Light_off__FinishedFunc();
    void Light_off__UpdateFunc();
    void Light_on__FinishedFunc();
    void Light_on__UpdateFunc();
    void BP_OnBite(UHealthComponent* TargetHealth);
    void ReceiveBeginPlay();
    void BP_OnStateChanged(ECaveLeechState NewState);
    void ShowHead(bool bNewVisibility);
    void OnDeath();
    void OnFrozen(AActor* Source);
    void OnUnFrozen();
    void ExecuteUbergraph_ENE_CaveLeech(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UHealthComponent* K2Node_Event_TargetHealth, ECaveLeechState K2Node_Event_newState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_CustomEvent_bNewVisibility, bool K2Node_SwitchEnum_CmpSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAPB_BarnacleAnim_C* K2Node_DynamicCast_AsAPB_Barnacle_Anim, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetCurrentTarget_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue, AActor* K2Node_Event_source);
}

#endif
