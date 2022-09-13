#ifndef UE4SS_SDK_BP_MissionControlPointlight_HPP
#define UE4SS_SDK_BP_MissionControlPointlight_HPP

class ABP_MissionControlPointlight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USceneComponent* DefaultSceneRoot;
    class UAnimInstance* OwnerAnim;
    class UObject* Owner Mesh;

    void CheckOwner();
    void Set_ABP_Reference(class UObject* OwnerMesh);
    void ExecuteUbergraph_BP_MissionControlPointlight(int32 EntryPoint);
};

#endif
