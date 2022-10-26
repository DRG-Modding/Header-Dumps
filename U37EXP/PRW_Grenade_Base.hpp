#ifndef UE4SS_SDK_PRW_Grenade_Base_HPP
#define UE4SS_SDK_PRW_Grenade_Base_HPP

class APRW_Grenade_Base_C : public AActor
{
    class UStaticMeshComponent* DisplayBounds;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
