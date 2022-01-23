#ifndef UE4SS_SDK_ENE_InfectedMule_HPP
#define UE4SS_SDK_ENE_InfectedMule_HPP

class AENE_InfectedMule_C : public AConvertedRobot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UBoxComponent* OverlapsPlayerTrigger;
    class UPointLightComponent* WakeUp_PointLight;
    class UParticleSystemComponent* P_ElectroPlantBeam;
    class UTerrainPlacementComponent* terrainPlacement;
    class USpotLightComponent* SpotLight1;
    class UPointLightComponent* Light_TurretGlow;
    class UPointLightComponent* Light_Leg4;
    class UPointLightComponent* Light_Leg3;
    class UPointLightComponent* Light_Leg2;
    class UPointLightComponent* Light_Leg1;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class USphereComponent* UseSphere;
    class UBoxComponent* Box;
    class USceneComponent* ParasitePoint3;
    class USceneComponent* ParasitePoint2;
    class USceneComponent* ParasitePoint1;
    class UPawnSensingComponent* PawnSensing;
    class UMaterialInstanceDynamic* LegLightsMat;
    class UAudioComponent* InfectedMuleWaitingForRepair;
    class UMaterialInstanceDynamic* FloodLightMat;
    class UMaterialInstanceDynamic* LaserLampMat;
    class UMaterialInstance* PulsatingLegLightMat;
    TArray<class AActor*> ActorsInShield;
    int32 PlayersInside;
    class UFSDAchievement* BetCAchievement;
    bool ShowBossHealth;
    bool ishealthbarshown;

    void OnRep_ShowBossHealth();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BP_OnInstroduce();
    void BP_OnShieldChanged(bool isGrowing);
    void BP_OnStateChanged(ERobotState TeamState);
    void ExecuteUbergraph_ENE_InfectedMule(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool K2Node_Event_isGrowing, ERobotState K2Node_Event_teamState, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetHasPoweredDown_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AConvertedRobotController* K2Node_DynamicCast_AsConverted_Robot_Controller, bool K2Node_DynamicCast_bSuccess_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FVector CallFunc_GetPlayerMediumPoint_ReturnValue, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
};

#endif
