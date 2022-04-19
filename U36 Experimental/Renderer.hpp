#ifndef UE4SS_SDK_Renderer_HPP
#define UE4SS_SDK_Renderer_HPP

struct FLightPropagationVolumeSettings
{
    uint8 bOverride_LPVIntensity;
    uint8 bOverride_LPVDirectionalOcclusionIntensity;
    uint8 bOverride_LPVDirectionalOcclusionRadius;
    uint8 bOverride_LPVDiffuseOcclusionExponent;
    uint8 bOverride_LPVSpecularOcclusionExponent;
    uint8 bOverride_LPVDiffuseOcclusionIntensity;
    uint8 bOverride_LPVSpecularOcclusionIntensity;
    uint8 bOverride_LPVSize;
    uint8 bOverride_LPVSecondaryOcclusionIntensity;
    uint8 bOverride_LPVSecondaryBounceIntensity;
    uint8 bOverride_LPVGeometryVolumeBias;
    uint8 bOverride_LPVVplInjectionBias;
    uint8 bOverride_LPVEmissiveInjectionIntensity;
    float LPVIntensity;
    float LPVVplInjectionBias;
    float LPVSize;
    float LPVSecondaryOcclusionIntensity;
    float LPVSecondaryBounceIntensity;
    float LPVGeometryVolumeBias;
    float LPVEmissiveInjectionIntensity;
    float LPVDirectionalOcclusionIntensity;
    float LPVDirectionalOcclusionRadius;
    float LPVDiffuseOcclusionExponent;
    float LPVSpecularOcclusionExponent;
    float LPVDiffuseOcclusionIntensity;
    float LPVSpecularOcclusionIntensity;
    float LPVFadeRange;
    float LPVDirectionalOcclusionFadeRange;

};

#endif
