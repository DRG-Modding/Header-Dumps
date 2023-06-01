#ifndef UE4SS_SDK_BP_News_Monitor_HPP
#define UE4SS_SDK_BP_News_Monitor_HPP

class ABP_News_Monitor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__BP_News_Monitor_Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_News_Monitor(int32 EntryPoint);
};

#endif
