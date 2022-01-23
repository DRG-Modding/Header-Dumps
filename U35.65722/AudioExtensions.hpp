#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

struct FSoundModulation
{
    TArray<class USoundModulationPluginSourceSettingsBase*> Settings;
};

class USpatializationPluginSourceSettingsBase : public UObject
{
};

class UAudioEndpointSettingsBase : public UObject
{
};

class USoundfieldEncodingSettingsBase : public UObject
{
};

class UOcclusionPluginSourceSettingsBase : public UObject
{
};

class USoundModulationPluginSourceSettingsBase : public UObject
{
};

class UReverbPluginSourceSettingsBase : public UObject
{
};

class USoundfieldEndpointSettingsBase : public UObject
{
};

class USoundfieldEffectSettingsBase : public UObject
{
};

class USoundfieldEffectBase : public UObject
{
    class USoundfieldEffectSettingsBase* Settings;
};

struct FSoundModulationParameter
{
    FName Control;
    float Value;
};

#endif
