#ifndef UE4SS_SDK_BP_HoopsGame_HPP
#define UE4SS_SDK_BP_HoopsGame_HPP

class ABP_HoopsGame_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box2;
    class UBoxComponent* R;
    class UBoxComponent* E;
    class UBoxComponent* Box1;
    class UWidgetComponent* Widget Previous Scores;
    class UStaticMeshComponent* Mesh_ScoreBoardPrevious;
    class UWidgetComponent* Widget Score;
    class UStaticMeshComponent* Mesh_Scoreboard;
    class USkeletalMeshComponent* Mesh_SlideAnim;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* P_Hoops_Edge;
    class UStaticMeshComponent* Mesh_Forcefield;
    class UBoxComponent* FailCollision;
    class UStaticMeshComponent* RestartButton_Mesh;
    class UBoxComponent* RestartButton_Collider;
    class UBillboardComponent* RestartButton;
    class UBillboardComponent* DestinationRight;
    class UBoxComponent* Box;
    class UCapsuleComponent* Collision;
    class UCapsuleComponent* Capsule5;
    class UCapsuleComponent* Capsule4;
    class UCapsuleComponent* Capsule3;
    class UCapsuleComponent* Capsule2;
    class UCapsuleComponent* Capsule1;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* HoopMesh;
    class USceneComponent* Hoop;
    class UInstantUsable* InstantUsable;
    class UBillboardComponent* DestinationLeft;
    class USceneComponent* DefaultSceneRoot;
    int32 CurrentScore;
    int32 Cycle;
    int32 CycleLastScore;
    int32 ComboMultiplier;
    int32 ComboMax;
    int32 RedBarrelScore;
    int32 BlueBarrelScore;
    int32 BarrelComboCountAchievement;
    int32 ComboInitial;
    FLinearColor Color Combo 1;
    FLinearColor Color Combo 2;
    FLinearColor Color Combo 3;
    class ABP_BarrelSpawner_C* BarrelSpawner;
    TArray<int32> Scores;
    class UFSDAchievement* BarrelScoreAchievement;
    class UFSDAchievement* DarwinAwardAchievement;
    class UFSDAchievement* BarrelKickerAchievement;
    class APlayerCharacter* LastActivePlayer;
    float NextFlipTimeServer;
    bool IsMovingRightServer;
    float NextFlipTimeLocal;
    bool IsMovingRightLocal;
    FRandomStream RandomSeed;
    float MoveTime;

    void OnRep_IsMovingRightServer();
    void OnRep_Scores();
    void GetBarrelScoreData(class ABP_Phys_Barrel01_C* Barrel, class USoundCue*& audio, class ABP_Phys_Barrel01_C*& OutBarrel, int32& Points);
    void OnRep_ComboMultiplier();
    void OnRep_CurrentScore();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Restart();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void StoreScore(int32 NewScore);
    void BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cheat_ToggleHoopGameMovement();
    void Set Latest Barrel kicker(class APlayerCharacter* Kicked by);
    void On Barrel In Hoop(class ABP_Phys_Barrel01_C* Barrel);
    void On Barglass In Hoop(class ABar_Glass_Physics_C* Glass);
    void On Player In Hoop(class APlayerCharacter* Player);
    void ReceiveTick(float DeltaSeconds);
    void OnSpaceballInHoop(int32 ScoreToAdd);
    void All_PlayComboLostSFX();
    void BndEvt__BP_HoopsGame_Box2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HoopsGame(int32 EntryPoint);
};

#endif
