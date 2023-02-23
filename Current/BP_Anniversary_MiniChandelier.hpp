#ifndef UE4SS_SDK_BP_Anniversary_MiniChandelier_HPP
#define UE4SS_SDK_BP_Anniversary_MiniChandelier_HPP

class ABP_Anniversary_MiniChandelier_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* SK_Anniversary_WallLamp_01;
    class USceneComponent* Scene;
    TArray<class USkeletalMesh*> LampMeshes;
    class USkeletalMesh* UsedLampMesh;
    FTimerHandle Timer;

    void OnRep_UsedLampMesh();
    void OnCollide();
    void BndEvt__BP_Anniversary_Lamp_SK_Anniversary_WallLamp_01_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Anniversary_MiniChandelier(int32 EntryPoint);
};

#endif
