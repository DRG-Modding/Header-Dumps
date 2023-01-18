#ifndef UE4SS_SDK_OculusMR_HPP
#define UE4SS_SDK_OculusMR_HPP

#include "OculusMR_enums.hpp"

struct FOculusMR_PlaneMeshTriangle
{
    FVector Vertex0;
    FVector2D UV0;
    FVector Vertex1;
    FVector2D UV1;
    FVector Vertex2;
    FVector2D UV2;

};

struct FTrackedCamera
{
    int32 Index;
    FString Name;
    double UpdateTime;
    float FieldOfView;
    int32 SizeX;
    int32 SizeY;
    ETrackedDeviceType AttachedTrackedDevice;
    FRotator CalibratedRotation;
    FVector CalibratedOffset;
    FRotator UserRotation;
    FVector UserOffset;
    FRotator RawRotation;
    FVector RawOffset;

};

class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
    class UVRNotificationsComponent* VRNotificationComponent;
    class UTexture2D* CameraColorTexture;
    class UTexture2D* CameraDepthTexture;
    class UOculusMR_PlaneMeshComponent* PlaneMeshComponent;
    class UMaterial* ChromaKeyMaterial;
    class UMaterial* OpaqueColoredMaterial;
    class UMaterialInstanceDynamic* ChromaKeyMaterialInstance;
    class UMaterialInstanceDynamic* CameraFrameMaterialInstance;
    class UMaterialInstanceDynamic* BackdropMaterialInstance;
    class UTexture2D* DefaultTexture_White;
    TArray<class UTextureRenderTarget2D*> BackgroundRenderTargets;
    class ASceneCapture2D* ForegroundCaptureActor;
    TArray<class UTextureRenderTarget2D*> ForegroundRenderTargets;
    TArray<double> PoseTimes;
    class UOculusMR_Settings* MRSettings;
    class UOculusMR_State* MRState;

};

class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetTrackingReferenceComponent(class USceneComponent* Component);
    bool SetMrcScalingFactor(float ScalingFactor);
    bool IsMrcEnabled();
    bool IsMrcActive();
    class USceneComponent* GetTrackingReferenceComponent();
    class UOculusMR_Settings* GetOculusMRSettings();
    float GetMrcScalingFactor();
};

class UOculusMR_PlaneMeshComponent : public UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
};

class UOculusMR_Settings : public UObject
{
    EOculusMR_ClippingReference ClippingReference;
    bool bUseTrackedCameraResolution;
    int32 WidthPerView;
    int32 HeightPerView;
    float CastingLatency;
    FColor BackdropColor;
    float HandPoseStateLatency;
    FColor ChromaKeyColor;
    float ChromaKeySimilarity;
    float ChromaKeySmoothRange;
    float ChromaKeySpillRange;
    EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects;
    bool bIsCasting;
    EOculusMR_CompositionMethod CompositionMethod;
    EOculusMR_CameraDeviceEnum CapturingCamera;

    void SetIsCasting(bool Val);
    void SetCompositionMethod(EOculusMR_CompositionMethod Val);
    void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);
    void SaveToIni();
    void LoadFromIni();
    bool GetIsCasting();
    EOculusMR_CompositionMethod GetCompositionMethod();
    EOculusMR_CameraDeviceEnum GetCapturingCamera();
    int32 GetBindToTrackedCameraIndex();
    void BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex);
};

class UOculusMR_State : public UObject
{
    FTrackedCamera TrackedCamera;
    class USceneComponent* TrackingReferenceComponent;
    double ScalingFactor;
    bool ChangeCameraStateRequested;
    bool BindToTrackedCameraIndexRequested;

};

#endif
