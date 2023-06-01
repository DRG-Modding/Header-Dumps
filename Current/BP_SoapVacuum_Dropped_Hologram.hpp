#ifndef UE4SS_SDK_BP_SoapVacuum_Dropped_Hologram_HPP
#define UE4SS_SDK_BP_SoapVacuum_Dropped_Hologram_HPP

class ABP_SoapVacuum_Dropped_Hologram_C : public AActor
{
    class UStaticMeshComponent* Hologram1;
    class UStaticMeshComponent* Hologram3;
    class UStaticMeshComponent* Hologram2;
    class URotatingSceneComponent* RotatingScene;
    class USceneComponent* DefaultSceneRoot;

};

#endif
