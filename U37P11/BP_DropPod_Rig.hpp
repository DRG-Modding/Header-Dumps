#ifndef UE4SS_SDK_BP_DropPod_Rig_HPP
#define UE4SS_SDK_BP_DropPod_Rig_HPP

class ABP_DropPod_Rig_C : public ABP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class USphereComponent* Sphere;
    class USpotLightComponent* SpotLight_Thruster;
    class UPointLightComponent* PointLight_Thruster;
    class UStaticMeshComponent* ThrusterPlasma;
    class UCapsuleComponent* ATeamAchievementCollider4;
    class UCapsuleComponent* ATeamAchievementCollider3;
    class UCapsuleComponent* ATeamAchievementCollider2;
    class UCapsuleComponent* ATeamAchievementCollider1;
    class UBoxComponent* Box1;
    class UAudioComponent* AudioLower;
    class UAudioComponent* audio_0;
    class UAudioComponent* DroppodLaunch;
    class UBoxComponent* DwarfChecker_0;
    FBP_DropPod_Rig_COnLeaveSpacerig OnLeaveSpacerig;
    void OnLeaveSpacerig();
    TArray<class APlayerCharacter*> playersInside;
    class UAudioComponent* PlayLeftAudioOnOpenDoor;
    class UAudioComponent* PlayRightAudioOnOpenDoor;
    class UAudioComponent* SpaceRigDrillIdle;
    int32 OldCountdownValue;
    int32 Amount of barrels in seats;
    class UFSDAchievement* ATeamAchievement;

    int32 ActivePlayerCount();
    void ReceiveBeginPlay();
    void OnMissionSelected(class UGeneratedMission* mission);
    void OnAllDwavesInsidePod(bool AllInside);
    void OnHostInsidePod(bool isInside);
    void OnCountdownCompleted();
    void OnHostTimerChanged(float newTime);
    void BndEvt__ATeamAchievementCollider1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider3_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ATeamAchievementCollider4_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Check for ATeamAchievement();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DropPod_Rig(int32 EntryPoint);
    void OnLeaveSpacerig__DelegateSignature();
};

#endif
