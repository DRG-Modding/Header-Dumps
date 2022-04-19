#ifndef UE4SS_SDK_InteractiveToolsFramework_HPP
#define UE4SS_SDK_InteractiveToolsFramework_HPP

#include "InteractiveToolsFramework_enums.hpp"

class UInputBehavior : public UObject
{
};

class UAnyButtonInputBehavior : public UInputBehavior
{
};

class UInteractiveGizmoBuilder : public UObject
{
};

class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UInteractiveGizmo : public UObject
{
    class UInputBehaviorSet* InputBehaviors;

};

class UAxisAngleGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoFloatParameterSource> AngleSource;
    TScriptInterface<class IGizmoClickTarget> HitTarget;
    TScriptInterface<class IGizmoStateTarget> StateTarget;
    bool bInInteraction;
    FVector RotationOrigin;
    FVector RotationAxis;
    FVector RotationPlaneX;
    FVector RotationPlaneY;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    float InteractionStartAngle;
    float InteractionCurAngle;

};

class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UAxisPositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;
    TScriptInterface<class IGizmoClickTarget> HitTarget;
    TScriptInterface<class IGizmoStateTarget> StateTarget;
    bool bEnableSignedAxis;
    bool bInInteraction;
    FVector InteractionOrigin;
    FVector InteractionAxis;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    float InteractionStartParameter;
    float InteractionCurParameter;
    float ParameterSign;

};

class UGizmoConstantAxisSource : public UObject
{
    FVector Origin;
    FVector Direction;

};

class UGizmoConstantFrameAxisSource : public UObject
{
    FVector Origin;
    FVector Direction;
    FVector TangentX;
    FVector TangentY;

};

class UGizmoWorldAxisSource : public UObject
{
    FVector Origin;
    int32 AxisIndex;

};

class UGizmoComponentAxisSource : public UObject
{
    class USceneComponent* Component;
    int32 AxisIndex;
    bool bLocalAxes;

};

class UInteractiveToolPropertySet : public UObject
{
    class UInteractiveToolPropertySet* CachedProperties;
    bool bIsPropertySetEnabled;

};

class UBrushBaseProperties : public UInteractiveToolPropertySet
{
    float BrushSize;
    bool bSpecifyRadius;
    float BrushRadius;
    float BrushStrength;
    float BrushFalloffAmount;
    bool bShowStrength;
    bool bShowFalloff;

};

class UInteractiveTool : public UObject
{
    class UInputBehaviorSet* InputBehaviors;
    TArray<class UObject*> ToolPropertyObjects;

};

class USingleSelectionTool : public UInteractiveTool
{
};

class UMeshSurfacePointTool : public USingleSelectionTool
{
};

struct FBrushStampData
{
};

class UBaseBrushTool : public UMeshSurfacePointTool
{
    class UBrushBaseProperties* BrushProperties;
    bool bInBrushStroke;
    float WorldToLocalScale;
    FBrushStampData LastBrushStamp;
    TSoftClassPtr<UBrushBaseProperties> PropertyClass;
    class UBrushStampIndicator* BrushStampIndicator;

};

class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
};

class UBrushStampIndicator : public UInteractiveGizmo
{
    float BrushRadius;
    float BrushFalloff;
    FVector BrushPosition;
    FVector BrushNormal;
    bool bDrawIndicatorLines;
    bool bDrawRadiusCircle;
    int32 SampleStepCount;
    FLinearColor LineColor;
    float LineThickness;
    bool bDepthTested;
    bool bDrawSecondaryLines;
    float SecondaryLineThickness;
    FLinearColor SecondaryLineColor;
    class UPrimitiveComponent* AttachedComponent;

};

class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
    bool bUpdateModifiersDuringDrag;

};

class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
};

class UInteractiveToolBuilder : public UObject
{
};

class UClickDragToolBuilder : public UInteractiveToolBuilder
{
};

class UClickDragTool : public UInteractiveTool
{
};

class AInternalToolFrameworkActor : public AActor
{
};

class AGizmoActor : public AInternalToolFrameworkActor
{
};

class UGizmoBaseComponent : public UPrimitiveComponent
{
    FLinearColor Color;
    float HoverSizeMultiplier;
    float PixelHitDistanceThreshold;

    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
};

class UGizmoArrowComponent : public UGizmoBaseComponent
{
    FVector Direction;
    float Gap;
    float Length;
    float Thickness;

};

class UGizmoBoxComponent : public UGizmoBaseComponent
{
    FVector Origin;
    FQuat Rotation;
    FVector Dimensions;
    float LineThickness;
    bool bRemoveHiddenLines;
    bool bEnableAxisFlip;

};

class UGizmoCircleComponent : public UGizmoBaseComponent
{
    FVector Normal;
    float Radius;
    float Thickness;
    int32 NumSides;
    bool bViewAligned;
    bool bOnlyAllowFrontFacingHits;

};

class IGizmoTransformSource : public IInterface
{

    void SetTransform(const FTransform& NewTransform);
    FTransform GetTransform();
};

class IGizmoAxisSource : public IInterface
{

    bool HasTangentVectors();
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);
    FVector GetOrigin();
    FVector GetDirection();
};

class IGizmoClickTarget : public IInterface
{

    void UpdateHoverState(bool bHovering);
};

class IGizmoStateTarget : public IInterface
{

    void EndUpdate();
    void BeginUpdate();
};

class IGizmoFloatParameterSource : public IInterface
{

    void SetParameter(float NewValue);
    float GetParameter();
    void EndModify();
    void BeginModify();
};

class IGizmoVec2ParameterSource : public IInterface
{

    void SetParameter(const FVector2D& NewValue);
    FVector2D GetParameter();
    void EndModify();
    void BeginModify();
};

class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
    FVector Normal;
    float HandleSize;
    float Thickness;
    FVector Direction;
    float Length;
    bool bImageScale;

};

class UGizmoRectangleComponent : public UGizmoBaseComponent
{
    FVector DirectionX;
    FVector DirectionY;
    float OffsetX;
    float OffsetY;
    float LengthX;
    float LengthY;
    float Thickness;
    uint8 SegmentFlags;

};

class UGizmoLambdaHitTarget : public UObject
{
};

class UGizmoComponentHitTarget : public UObject
{
    class UPrimitiveComponent* Component;

};

struct FBehaviorInfo
{
    class UInputBehavior* Behavior;

};

class UInputBehaviorSet : public UObject
{
    TArray<FBehaviorInfo> Behaviors;

};

class IInputBehaviorSource : public IInterface
{
};

class UInputRouter : public UObject
{
    bool bAutoInvalidateOnHover;
    bool bAutoInvalidateOnCapture;
    class UInputBehaviorSet* ActiveInputBehaviors;

};

class UInteractionMechanic : public UObject
{
};

struct FActiveGizmo
{
};

class UInteractiveGizmoManager : public UObject
{
    TArray<FActiveGizmo> ActiveGizmos;
    TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;

};

class IToolContextTransactionProvider : public IInterface
{
};

class UInteractiveToolManager : public UObject
{
    class UInteractiveTool* ActiveLeftTool;
    class UInteractiveTool* ActiveRightTool;
    TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;

};

class IToolFrameworkComponent : public IInterface
{
};

class UInteractiveToolsContext : public UObject
{
    class UInputRouter* InputRouter;
    class UInteractiveToolManager* ToolManager;
    class UInteractiveGizmoManager* GizmoManager;
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;

};

class AIntervalGizmoActor : public AGizmoActor
{
    class UGizmoLineHandleComponent* UpIntervalComponent;
    class UGizmoLineHandleComponent* DownIntervalComponent;
    class UGizmoLineHandleComponent* ForwardIntervalComponent;

};

class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UIntervalGizmo : public UInteractiveGizmo
{
    class UGizmoTransformChangeStateTarget* StateTarget;
    class UTransformProxy* TransformProxy;
    TArray<class UPrimitiveComponent*> ActiveComponents;
    TArray<class UInteractiveGizmo*> ActiveGizmos;
    class UGizmoComponentAxisSource* AxisYSource;
    class UGizmoComponentAxisSource* AxisZSource;

};

class UGizmoBaseFloatParameterSource : public UObject
{
};

class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoFloatParameterSource> FloatParameterSource;
    float MinParameter;
    float MaxParameter;

};

class UKeyAsModifierInputBehavior : public UInputBehavior
{
};

class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
};

class UMouseHoverBehavior : public UInputBehavior
{
};

class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
};

class UMultiSelectionTool : public UInteractiveTool
{
};

struct FGizmoFloatParameterChange
{
    float InitialValue;
    float CurrentValue;

};

class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
    float Value;
    FGizmoFloatParameterChange LastChange;

};

class UGizmoBaseVec2ParameterSource : public UObject
{
};

struct FGizmoVec2ParameterChange
{
    FVector2D InitialValue;
    FVector2D CurrentValue;

};

class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
    FVector2D Value;
    FGizmoVec2ParameterChange LastChange;

};

class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float Parameter;
    FGizmoFloatParameterChange LastChange;
    FVector CurTranslationAxis;
    FVector CurTranslationOrigin;
    FTransform InitialTransform;

};

class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurTranslationOrigin;
    FVector CurTranslationNormal;
    FVector CurTranslationAxisX;
    FVector CurTranslationAxisY;
    FTransform InitialTransform;

};

class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float Angle;
    FGizmoFloatParameterChange LastChange;
    FVector CurRotationAxis;
    FVector CurRotationOrigin;
    FTransform InitialTransform;

};

class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float ScaleMultiplier;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurScaleOrigin;
    FVector CurScaleNormal;
    FVector CurScaleAxisX;
    FVector CurScaleAxisY;
    FTransform InitialTransform;

};

class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float ScaleMultiplier;
    float Parameter;
    FGizmoFloatParameterChange LastChange;
    FVector CurScaleAxis;
    FVector CurScaleOrigin;
    FTransform InitialTransform;

};

class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float ScaleMultiplier;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurScaleOrigin;
    FVector CurScaleNormal;
    FVector CurScaleAxisX;
    FVector CurScaleAxisY;
    FTransform InitialTransform;

};

class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UPlanePositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;
    TScriptInterface<class IGizmoClickTarget> HitTarget;
    TScriptInterface<class IGizmoStateTarget> StateTarget;
    bool bEnableSignedAxis;
    bool bFlipX;
    bool bFlipY;
    bool bInInteraction;
    FVector InteractionOrigin;
    FVector InteractionNormal;
    FVector InteractionAxisX;
    FVector InteractionAxisY;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    FVector2D InteractionStartParameter;
    FVector2D InteractionCurParameter;
    FVector2D ParameterSigns;

};

class USelectionSet : public UObject
{
};

class UMeshSelectionSet : public USelectionSet
{
    TArray<int32> Vertices;
    TArray<int32> Edges;
    TArray<int32> Faces;
    TArray<int32> Groups;

};

class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
    bool HitTestOnRelease;

};

class USingleClickToolBuilder : public UInteractiveToolBuilder
{
};

class USingleClickTool : public UInteractiveTool
{
};

class UGizmoNilStateTarget : public UObject
{
};

class UGizmoLambdaStateTarget : public UObject
{
};

class UGizmoObjectModifyStateTarget : public UObject
{
};

class UGizmoTransformChangeStateTarget : public UObject
{
    TScriptInterface<class IToolContextTransactionProvider> TransactionManager;

};

class ATransformGizmoActor : public AGizmoActor
{
    class UPrimitiveComponent* TranslateX;
    class UPrimitiveComponent* TranslateY;
    class UPrimitiveComponent* TranslateZ;
    class UPrimitiveComponent* TranslateYZ;
    class UPrimitiveComponent* TranslateXZ;
    class UPrimitiveComponent* TranslateXY;
    class UPrimitiveComponent* RotateX;
    class UPrimitiveComponent* RotateY;
    class UPrimitiveComponent* RotateZ;
    class UPrimitiveComponent* UniformScale;
    class UPrimitiveComponent* AxisScaleX;
    class UPrimitiveComponent* AxisScaleY;
    class UPrimitiveComponent* AxisScaleZ;
    class UPrimitiveComponent* PlaneScaleYZ;
    class UPrimitiveComponent* PlaneScaleXZ;
    class UPrimitiveComponent* PlaneScaleXY;

};

class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UTransformGizmo : public UInteractiveGizmo
{
    class UTransformProxy* ActiveTarget;
    bool bSnapToWorldGrid;
    bool bGridSizeIsExplicit;
    FVector ExplicitGridSize;
    bool bRotationGridSizeIsExplicit;
    FRotator ExplicitRotationGridSize;
    bool bSnapToWorldRotGrid;
    bool bUseContextCoordinateSystem;
    EToolContextCoordinateSystem CurrentCoordinateSystem;
    TArray<class UPrimitiveComponent*> ActiveComponents;
    TArray<class UPrimitiveComponent*> NonuniformScaleComponents;
    TArray<class UInteractiveGizmo*> ActiveGizmos;
    class UGizmoConstantFrameAxisSource* CameraAxisSource;
    class UGizmoComponentAxisSource* AxisXSource;
    class UGizmoComponentAxisSource* AxisYSource;
    class UGizmoComponentAxisSource* AxisZSource;
    class UGizmoComponentAxisSource* UnitAxisXSource;
    class UGizmoComponentAxisSource* UnitAxisYSource;
    class UGizmoComponentAxisSource* UnitAxisZSource;
    class UGizmoTransformChangeStateTarget* StateTarget;
    class UGizmoScaledTransformSource* ScaledTransformSource;

};

class UTransformProxy : public UObject
{
    bool bRotatePerObject;
    bool bSetPivotMode;
    FTransform SharedTransform;
    FTransform InitialSharedTransform;

};

class UGizmoBaseTransformSource : public UObject
{
};

class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
    class USceneComponent* Component;
    bool bModifyComponentOnTransform;

};

class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
    TScriptInterface<class IGizmoTransformSource> ChildTransformSource;

};

class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
    class UTransformProxy* Proxy;

};

struct FInputRayHit
{
};

#endif
