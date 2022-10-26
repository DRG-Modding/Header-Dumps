#ifndef UE4SS_SDK_BP_MinersManualConsole_HPP
#define UE4SS_SDK_BP_MinersManualConsole_HPP

class ABP_MinersManualConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USkeletalMeshComponent* SK_Flier_Shooter;
    class UInstantUsable* InstantUsable;
    class UWidgetComponent* Widget;
    class UTextRenderComponent* TextRender;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* NS_MonsterManual_Hologram;
    class UStaticMeshComponent* SM_Spider_Grunt_GuardA;
    class UStaticMeshComponent* SM_Spider_Grunt_A;
    class USkeletalMeshComponent* SK_Flier_Grabber_A;
    class USkeletalMeshComponent* SK_Flier_Heavy;
    class USkeletalMeshComponent* SK_Flier_Triple_Shooter;
    class USkeletalMeshComponent* SK_Spider_Tank_A;
    class USceneComponent* Enemy_Meshes;
    class UStaticMeshComponent* MinersManual;
    class USceneComponent* DefaultSceneRoot;
    float Rot speed;
    TArray<class UPrimitiveComponent*> EnemyMeshes;
    class UPrimitiveComponent* CurrVisibleMesh;

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_MinersManual_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void SwitchMesh();
    void ExecuteUbergraph_BP_MinersManualConsole(int32 EntryPoint);
};

#endif
