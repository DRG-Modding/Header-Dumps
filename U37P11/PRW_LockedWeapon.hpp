#ifndef UE4SS_SDK_PRW_LockedWeapon_HPP
#define UE4SS_SDK_PRW_LockedWeapon_HPP

class APRW_LockedWeapon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Crate_B;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* Top;
    class UStaticMeshComponent* Cube;
    class USceneComponent* Scaler;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRW_LockedWeapon(int32 EntryPoint);
};

#endif
