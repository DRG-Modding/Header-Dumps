#ifndef UE4SS_SDK_BP_DetPack_Charge_HPP
#define UE4SS_SDK_BP_DetPack_Charge_HPP

class ABP_DetPack_Charge_C : public ADetPack
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Useable;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* Sphere;
    class UAudioComponent* audio;
    class USkeletalMeshComponent* SkeletalMesh;
    class UBoxComponent* Box;
    float SphereTimeline_Alpha_B734CAA34EA448BC3B483384E4E415D3;
    float SphereTimeline_Scale_B734CAA34EA448BC3B483384E4E415D3;
    TEnumAsByte<ETimelineDirection::Type> SphereTimeline__Direction_B734CAA34EA448BC3B483384E4E415D3;
    class UTimelineComponent* SphereTimeline;
    class UMaterialInstanceDynamic* SphereMaterial;
    bool IsPlaced;

    void OnRep_IsPlaced();
    void UserConstructionScript();
    void SphereTimeline__FinishedFunc();
    void SphereTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void RecieveHitObject();
    void OnExploded();
    void Show Warning Sphere();
    void ExecuteUbergraph_BP_DetPack_Charge(int32 EntryPoint);
};

#endif
