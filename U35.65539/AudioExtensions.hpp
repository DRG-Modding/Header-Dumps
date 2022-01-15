#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

class USpatializationPluginSourceSettingsBase : UObject
{
}

class UAudioEndpointSettingsBase : UObject
{
}

class USoundfieldEncodingSettingsBase : UObject
{
}

class UOcclusionPluginSourceSettingsBase : UObject
{
}

class USoundModulationPluginSourceSettingsBase : UObject
{
}

class UReverbPluginSourceSettingsBase : UObject
{
}

class USoundfieldEndpointSettingsBase : UObject
{
}

class USoundfieldEffectSettingsBase : UObject
{
}

class USoundfieldEffectBase : UObject
{
    USoundfieldEffectSettingsBase* Settings;
}

struct USoundModulationParameter
{
    FName Control;
    float Value;
}

struct USoundModulation
{
    TArray<USoundModulationPluginSourceSettingsBase*> Settings;
}

#endif
