#ifndef BITCOIN_TEST_DATA_BTG_PREMINE_DATA_H
#define BITCOIN_TEST_DATA_BTG_PREMINE_DATA_H

#include <vector>

struct CltvMultiSigTestData
{
    uint32_t height;
    std::string redeem_script;
};

std::vector<CltvMultiSigTestData> GetCltvMultiSigTestData()
{
    std::vector<CltvMultiSigTestData> data = {
        // First 4 blocks.
        { 491407, "542102babc391be409351aa993deb10083a0a852b79b36df80954341c74522fb298c21210267c59df7a3653d9cef3819cfb5a2a35d3f6217f522c307f05ab5714c1c738c442102532558057b56b76349b6a3a8c9d39547e482869fcd9556767c83523aa02fb358210214a27d6aa62e4aa14ebaf4682cd90e629bcb4ab18eccfed150dbed0b447bbafa21038f4a7a5524929642e5688c5cecac4b5c7806a6520316f53ba71dbbdb3e1810372102bb4feeb207779054aacb49b61d325f46e0b98afb301a66dc32ca3e7484f419ef56ae" },
        { 491408, "54210395a0b7b7fed3a09ad9a526f58955b2e6c6349678fc319fad79822d7b5727a1892103b2c38ed954facb5adce1a8621ffb559601490125ba09e65d5e3e667a2adc6fdc2103fd383f5b8ccb9aaedd2b5924f7198dacd2f6d38b50460b03194204344c5e8f2c2102aa0a0aa08142f9bd3c2e794a292c68df730173bce2e6a69c2810e445df7ed363210291a043b4375bbde4e5e3738957ae5e83c8eecab70b90f55b3dc0b547a1ac19cf21031f4d880c835238b97625d20579940e965a833c30fb8f643bd5e6a43ef37e0ee756ae" },
        { 491409, "54210328571bff52ab95267ca51d7fe2689599cb73300a3847d6440ecd9882166e1ed7210301411004164e5798db00227c1a8e87c4e0a0e3425057b1c650a5e88252b08035210399e7477f01d40af05a417cfbf98c179e0c92778fb731e7f6422036c4918cb0d12102f136e4181d63ec1d3f587513a21427c6ec5d5c36364f20abdf4f751ce21e485f2102fd5c856002b77384599ea9cd6ceae515223809e6f1b63d45be5456b409d2be8e2102bf748f7e7291e9061f32bc72ea52a325154dadddb98348307838565fc8855f4c56ae" },
        { 491410, "542103d1198ed4659a53bbc5fd945893545ee5efda9c20d014b87c138f658ed61d9cd22103d558f9dd313bf6a4ebbc4f3c9209f758e21e99c1d3fb3a2fc40517f4de01d55c2103e185dd9289d6f72ed579b2db9474e033361902cb5c60817f757652fd8691067721023c4975dbb840e91a0047496412a8f69eaf61571d24a552713d585337bed2610121032c8735d320b6219cb398999345fea9e6b234e5f7d9f96c6a2758658d261acd6d21029860998228d746ec5ccdc47b451b3143c05f9e26b7b1a491d64429dcac3feb0e56ae" },
        // Random blocks.
        { 491509, "54210328571bff52ab95267ca51d7fe2689599cb73300a3847d6440ecd9882166e1ed7210301411004164e5798db00227c1a8e87c4e0a0e3425057b1c650a5e88252b08035210399e7477f01d40af05a417cfbf98c179e0c92778fb731e7f6422036c4918cb0d12102f136e4181d63ec1d3f587513a21427c6ec5d5c36364f20abdf4f751ce21e485f2102fd5c856002b77384599ea9cd6ceae515223809e6f1b63d45be5456b409d2be8e2102bf748f7e7291e9061f32bc72ea52a325154dadddb98348307838565fc8855f4c56ae" },
        // CLTV blocks.
        { 496207, "03fb5d08b175542102babc391be409351aa993deb10083a0a852b79b36df80954341c74522fb298c21210267c59df7a3653d9cef3819cfb5a2a35d3f6217f522c307f05ab5714c1c738c442102532558057b56b76349b6a3a8c9d39547e482869fcd9556767c83523aa02fb358210214a27d6aa62e4aa14ebaf4682cd90e629bcb4ab18eccfed150dbed0b447bbafa21038f4a7a5524929642e5688c5cecac4b5c7806a6520316f53ba71dbbdb3e1810372102bb4feeb207779054aacb49b61d325f46e0b98afb301a66dc32ca3e7484f419ef56ae" },
        { 496868, "0387b308b17554210395a0b7b7fed3a09ad9a526f58955b2e6c6349678fc319fad79822d7b5727a1892103b2c38ed954facb5adce1a8621ffb559601490125ba09e65d5e3e667a2adc6fdc2103fd383f5b8ccb9aaedd2b5924f7198dacd2f6d38b50460b03194204344c5e8f2c2102aa0a0aa08142f9bd3c2e794a292c68df730173bce2e6a69c2810e445df7ed363210291a043b4375bbde4e5e3738957ae5e83c8eecab70b90f55b3dc0b547a1ac19cf21031f4d880c835238b97625d20579940e965a833c30fb8f643bd5e6a43ef37e0ee756ae" },
        { 498476, "03d78009b17554210395a0b7b7fed3a09ad9a526f58955b2e6c6349678fc319fad79822d7b5727a1892103b2c38ed954facb5adce1a8621ffb559601490125ba09e65d5e3e667a2adc6fdc2103fd383f5b8ccb9aaedd2b5924f7198dacd2f6d38b50460b03194204344c5e8f2c2102aa0a0aa08142f9bd3c2e794a292c68df730173bce2e6a69c2810e445df7ed363210291a043b4375bbde4e5e3738957ae5e83c8eecab70b90f55b3dc0b547a1ac19cf21031f4d880c835238b97625d20579940e965a833c30fb8f643bd5e6a43ef37e0ee756ae" },
        { 499406, "039bf809b175542103d1198ed4659a53bbc5fd945893545ee5efda9c20d014b87c138f658ed61d9cd22103d558f9dd313bf6a4ebbc4f3c9209f758e21e99c1d3fb3a2fc40517f4de01d55c2103e185dd9289d6f72ed579b2db9474e033361902cb5c60817f757652fd8691067721023c4975dbb840e91a0047496412a8f69eaf61571d24a552713d585337bed2610121032c8735d320b6219cb398999345fea9e6b234e5f7d9f96c6a2758658d261acd6d21029860998228d746ec5ccdc47b451b3143c05f9e26b7b1a491d64429dcac3feb0e56ae" },
    };
    return data;
}


#endif
