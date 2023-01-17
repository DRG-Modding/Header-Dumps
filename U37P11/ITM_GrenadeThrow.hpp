#ifndef UE4SS_SDK_ITM_GrenadeThrow_HPP
#define UE4SS_SDK_ITM_GrenadeThrow_HPP

class AITM_GrenadeThrow_C : public AThrownGrenadeItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* CookTicking;
    class UCrosshairAggregator* CrosshairAggregator;
    class UBillboardComponent* Billboard;
    class USceneComponent* EndPoint;
    class USplineMeshComponent* SplineMesh;
    class USceneComponent* DefaultSceneRoot;
    FVector StartTangent;
    FVector EndTangent;
    FVector EndLocation;
    FRuntimeFloatCurve ScaleCurve;

    void UpdateSpline(TArray<FVector>& Array, float& DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void RecieveEquipped();
    void RecieveUnequipped();
    void ReceiveBeginPlay();
    void Set Is Visible(bool Visible);
    void GrenadeThrown();
    void UpdateCookTime(float Time);
    void ExecuteUbergraph_ITM_GrenadeThrow(int32 EntryPoint);
};

#endif
