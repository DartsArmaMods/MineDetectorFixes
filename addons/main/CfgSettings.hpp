class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {
                main_addon = QUOTE(ADDON);

                class dependencies {
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "(true)"};
                    ACE[] = {"ace_arsenal", REQUIRED_ACE_VERSION, "isClass (configFile >> 'CfgPatches' >> 'ace_arsenal')"};
                };
            };
        };
    };
};