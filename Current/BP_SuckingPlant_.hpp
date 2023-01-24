#ifndef UE4SS_SDK_BP_SuckingPlant__HPP
#define UE4SS_SDK_BP_SuckingPlant__HPP

class ABP_SuckingPlant__C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* SuckingPlantMove;
    class UAudioComponent* SuckingPlantLoop;
    class UAudioComponent* SuckingPlantClose;
    class UAudioComponent* SuckingPlantOpen;
    class UParticleSystemComponent* SuckingPSys;
    class USphereComponent* MouthBlocker;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* PlantBody;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleHealthComponent* SimpleHealth;
    class UPawnSensingComponent* PawnSensing;
    class USceneComponent* DefaultSceneRoot;
    float Pulsating_shell_Pulse_351B8E04438E55A34AD7599F13872713;
    TEnumAsByte<ETimelineDirection::Type> Pulsating_shell__Direction_351B8E04438E55A34AD7599F13872713;
    class UTimelineComponent* Pulsating shell;
    TEnumAsByte<ETimelineDirection::Type> Move_towards_target__Direction_3E7A86F94B91CDEC852EE0BAD9B36A13;
    class UTimelineComponent* Move towards target;
    float Sucking_Duration_Model_Emissive_intensity___7C306C17493093A48A5774B653EC9DCE;
    TEnumAsByte<ETimelineDirection::Type> Sucking_Duration__Direction_7C306C17493093A48A5774B653EC9DCE;
    class UTimelineComponent* Sucking Duration;
    FRotator Target Look At Rotation;
    TArray<class APlayerCharacter*> Players inside;
    class APawn* Current Target;
    float Suck Duration;
    float Reload Time;
    float Time Until New Target;
    float Vertical movement force;
    float sucking force;
    TEnumAsByte<E_SPlantReloadSteps::Type> PlantState;
    class UMaterialInstanceDynamic* Membrane Material;
    class UMaterialInstanceDynamic* Shell material;
    float Original Shell Intensity;
    float Original Membrane intensity;
    FBP_SuckingPlant__COnRotationChange OnRotationChange;
    void OnRotationChange(FVector Target Rotation);
    FVector Current Rotation;
    float Pulse time;
    FTimerHandle Pulse timer;
    float Max membrane pulse;
    FVector Previous Rotation;
    float safe distance from mouthblocker;

    void Is actor too close(FVector actor location, bool& is too close);
    void OnRep_Current Target();
    void Handle Materials(float % Membrane, float % Glow);
    void OnRep_Current Rotation();
    void OnRep_PlantState();
    void Suck In Target Element(class APlayerCharacter* Input Character);
    void UserConstructionScript();
    void Sucking Duration__FinishedFunc();
    void Sucking Duration__UpdateFunc();
    void Sucking Duration__Stop Particle System__EventFunc();
    void Move towards target__FinishedFunc();
    void Move towards target__UpdateFunc();
    void Pulsating shell__FinishedFunc();
    void Pulsating shell__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void Suck In Players();
    void Reload Ability();
    void Move To Target();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void Pulse Shell();
    void BndEvt__MouthBlocker_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SuckingPlant_(int32 EntryPoint);
    void OnRotationChange__DelegateSignature(FVector Target Rotation);
};

#endif
