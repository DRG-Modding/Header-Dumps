#ifndef UE4SS_SDK_ENE_InfectedMule_HPP
#define UE4SS_SDK_ENE_InfectedMule_HPP

class AENE_InfectedMule_C : UConvertedRobot
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    UBoxComponent* OverlapsPlayerTrigger;
    UPointLightComponent* WakeUp_PointLight;
    UParticleSystemComponent* P_ElectroPlantBeam;
    UTerrainPlacementComponent* terrainPlacement;
    USpotLightComponent* SpotLight1;
    UPointLightComponent* Light_TurretGlow;
    UPointLightComponent* Light_Leg4;
    UPointLightComponent* Light_Leg3;
    UPointLightComponent* Light_Leg2;
    UPointLightComponent* Light_Leg1;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    USphereComponent* UseSphere;
    UBoxComponent* Box;
    USceneComponent* ParasitePoint3;
    USceneComponent* ParasitePoint2;
    USceneComponent* ParasitePoint1;
    UPawnSensingComponent* PawnSensing;
    UMaterialInstanceDynamic* LegLightsMat;
    UAudioComponent* InfectedMuleWaitingForRepair;
    UMaterialInstanceDynamic* FloodLightMat;
    UMaterialInstanceDynamic* LaserLampMat;
    UMaterialInstance* PulsatingLegLightMat;
    TArray<AActor*> ActorsInShield;
    int32 PlayersInside;
    UFSDAchievement* BetCAchievement;
    bool ShowBossHealth;
    bool ishealthbarshown;

    void OnRep_ShowBossHealth();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BP_OnInstroduce();
    void BP_OnShieldChanged(bool isGrowing);
    void BP_OnStateChanged(ERobotState TeamState);
    void ExecuteUbergraph_ENE_InfectedMule(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool K2Node_Event_isGrowing, ERobotState K2Node_Event_teamState, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetHasPoweredDown_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, AController* CallFunc_GetController_ReturnValue_1, UConvertedRobotController* K2Node_DynamicCast_AsConverted_Robot_Controller, bool K2Node_DynamicCast_bSuccess_2, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FVector CallFunc_GetPlayerMediumPoint_ReturnValue, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
