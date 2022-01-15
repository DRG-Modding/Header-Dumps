#ifndef UE4SS_SDK_FieldSystemEngine_HPP
#define UE4SS_SDK_FieldSystemEngine_HPP

class AFieldSystemActor : AActor
{
    UFieldSystemComponent* FieldSystemComponent;
}

class UFieldSystem : UObject
{
}

class UFieldSystemComponent : UPrimitiveComponent
{
    UFieldSystem* FieldSystem;
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;

    void ResetFieldSystem();
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
    void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations);
    void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
    void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
    void ApplyPhysicsField(bool Enabled, uint8 Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    void AddFieldCommand(bool Enabled, uint8 Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
}

class UFieldSystemMetaData : UActorComponent
{
}

class UFieldSystemMetaDataIteration : UFieldSystemMetaData
{
    int32 Iterations;

    UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations);
}

class UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
{
    TEnumAsByte<EFieldResolutionType> ResolutionType;

    UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(uint8 ResolutionType);
}

class UFieldNodeBase : UActorComponent
{
}

class UFieldNodeInt : UFieldNodeBase
{
}

class UFieldNodeFloat : UFieldNodeBase
{
}

class UFieldNodeVector : UFieldNodeBase
{
}

class UUniformInteger : UFieldNodeInt
{
    int32 Magnitude;

    UUniformInteger* SetUniformInteger(int32 Magnitude);
}

class URadialIntMask : UFieldNodeInt
{
    float Radius;
    FVector Position;
    int32 InteriorValue;
    int32 ExteriorValue;
    TEnumAsByte<ESetMaskConditionType> SetMaskCondition;

    URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32 InteriorValue, int32 ExteriorValue, uint8 SetMaskConditionIn);
}

class UUniformScalar : UFieldNodeFloat
{
    float Magnitude;

    UUniformScalar* SetUniformScalar(float Magnitude);
}

class URadialFalloff : UFieldNodeFloat
{
    float Magnitude;
    float MinRange;
    float MaxRange;
    float Default;
    float Radius;
    FVector Position;
    TEnumAsByte<EFieldFalloffType> Falloff;

    URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, uint8 Falloff);
}

class UPlaneFalloff : UFieldNodeFloat
{
    float Magnitude;
    float MinRange;
    float MaxRange;
    float Default;
    float Distance;
    FVector Position;
    FVector Normal;
    TEnumAsByte<EFieldFalloffType> Falloff;

    UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, uint8 Falloff);
}

class UBoxFalloff : UFieldNodeFloat
{
    float Magnitude;
    float MinRange;
    float MaxRange;
    float Default;
    FTransform Transform;
    TEnumAsByte<EFieldFalloffType> Falloff;

    UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, uint8 Falloff);
}

class UNoiseField : UFieldNodeFloat
{
    float MinRange;
    float MaxRange;
    FTransform Transform;

    UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);
}

class UUniformVector : UFieldNodeVector
{
    float Magnitude;
    FVector Direction;

    UUniformVector* SetUniformVector(float Magnitude, FVector Direction);
}

class URadialVector : UFieldNodeVector
{
    float Magnitude;
    FVector Position;

    URadialVector* SetRadialVector(float Magnitude, FVector Position);
}

class URandomVector : UFieldNodeVector
{
    float Magnitude;

    URandomVector* SetRandomVector(float Magnitude);
}

class UOperatorField : UFieldNodeBase
{
    float Magnitude;
    UFieldNodeBase* RightField;
    UFieldNodeBase* LeftField;
    TEnumAsByte<EFieldOperationType> Operation;

    UOperatorField* SetOperatorField(float Magnitude, const UFieldNodeBase* RightField, const UFieldNodeBase* LeftField, uint8 Operation);
}

class UToIntegerField : UFieldNodeInt
{
    UFieldNodeFloat* FloatField;

    UToIntegerField* SetToIntegerField(const UFieldNodeFloat* FloatField);
}

class UToFloatField : UFieldNodeFloat
{
    UFieldNodeInt* IntField;

    UToFloatField* SetToFloatField(const UFieldNodeInt* IntegerField);
}

class UCullingField : UFieldNodeBase
{
    UFieldNodeBase* Culling;
    UFieldNodeBase* Field;
    TEnumAsByte<EFieldCullingOperationType> Operation;

    UCullingField* SetCullingField(const UFieldNodeBase* Culling, const UFieldNodeBase* Field, uint8 Operation);
}

class UReturnResultsTerminal : UFieldNodeBase
{

    UReturnResultsTerminal* SetReturnResultsTerminal();
}

#endif
